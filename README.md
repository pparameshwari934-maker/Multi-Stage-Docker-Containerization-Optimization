# Multi-Stage Docker Containerization & Optimization

A small production-style full-stack application demonstrating Docker multi-stage builds.

## Stack
- Frontend: React + Vite + Nginx
- Backend: Node.js + Express
- Orchestration: Docker Compose
- Security: non-root Node runtime, minimal Alpine images, no development dependencies in backend runtime

## Run

```bash
docker compose up --build
```

Open: http://localhost:8080

## Useful commands

```bash
docker compose ps
docker compose logs -f
docker compose down
docker image ls
```

## Optimization demonstrated
1. Build dependencies are separated from runtime stages.
2. Frontend source is compiled to static assets and served by Nginx.
3. Backend runtime installs only production dependencies.
4. `.dockerignore` reduces build context.
5. Health checks are included.
6. Containers restart automatically and the backend runs as a non-root user.

## Architecture

Browser -> Nginx frontend -> `/api/*` -> Node.js backend
